// Copyright (c) 2006-2016 Audiokinetic Inc. / All Rights Reserved

#include "AkAudioDevice.h"
#include "AkAudioClasses.h"

#if AK_SUPPORTS_LEVEL_SEQUENCER

#include "MovieSceneAkAudioRTPCSection.h"


float UMovieSceneAkAudioRTPCSection::Eval(float Position) const
{
	if (!IsInfinite())
	{
		Position = FMath::Clamp(Position, GetStartTime(), GetEndTime());
	}

	return FloatCurve.Eval(Position);
}


void UMovieSceneAkAudioRTPCSection::MoveSection(float DeltaPosition, TSet<FKeyHandle>& KeyHandles)
{
	Super::MoveSection(DeltaPosition, KeyHandles);

	// Move the curve
	FloatCurve.ShiftCurve(DeltaPosition, KeyHandles);
}


void UMovieSceneAkAudioRTPCSection::DilateSection(float DilationFactor, float Origin, TSet<FKeyHandle>& KeyHandles)
{
	Super::DilateSection(DilationFactor, Origin, KeyHandles);

	FloatCurve.ScaleCurve(Origin, DilationFactor, KeyHandles);
}


void UMovieSceneAkAudioRTPCSection::GetKeyHandles(TSet<FKeyHandle>& OutKeyHandles, TRange<float> TimeRange) const
{
	if (!TimeRange.Overlaps(GetRange()))
	{
		return;
	}

	for (auto It(FloatCurve.GetKeyHandleIterator()); It; ++It)
	{
		float Time = FloatCurve.GetKeyTime(It.Key());
		if (TimeRange.Contains(Time))
		{
			OutKeyHandles.Add(It.Key());
		}
	}
}


TOptional<float> UMovieSceneAkAudioRTPCSection::GetKeyTime(FKeyHandle KeyHandle) const
{
	if (FloatCurve.IsKeyHandleValid(KeyHandle))
	{
		return TOptional<float>(FloatCurve.GetKeyTime(KeyHandle));
	}
	return TOptional<float>();
}


void UMovieSceneAkAudioRTPCSection::SetKeyTime(FKeyHandle KeyHandle, float Time)
{
	if (FloatCurve.IsKeyHandleValid(KeyHandle))
	{
		FloatCurve.SetKeyTime(KeyHandle, Time);
	}
}


void UMovieSceneAkAudioRTPCSection::AddKey(float Time, const float& Value, EMovieSceneKeyInterpolation KeyInterpolation)
{
	AddKeyToCurve(FloatCurve, Time, Value, KeyInterpolation);
}


bool UMovieSceneAkAudioRTPCSection::NewKeyIsNewData(float Time, const float& Value) const
{
	return FMath::IsNearlyEqual(FloatCurve.Eval(Time), Value) == false;
}

bool UMovieSceneAkAudioRTPCSection::HasKeys(const float& Value) const
{
	return FloatCurve.GetNumKeys() > 0;
}

void UMovieSceneAkAudioRTPCSection::SetDefault(const float& Value)
{
	SetCurveDefault(FloatCurve, Value);
}

void UMovieSceneAkAudioRTPCSection::ClearDefaults()
{
	FloatCurve.ClearDefaultValue();
}

#endif // AK_SUPPORTS_LEVEL_SEQUENCER
