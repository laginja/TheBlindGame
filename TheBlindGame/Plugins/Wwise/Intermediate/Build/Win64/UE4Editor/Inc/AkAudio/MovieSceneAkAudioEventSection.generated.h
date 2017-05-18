// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_MovieSceneAkAudioEventSection_generated_h
#error "MovieSceneAkAudioEventSection.generated.h already included, missing '#pragma once' in MovieSceneAkAudioEventSection.h"
#endif
#define AKAUDIO_MovieSceneAkAudioEventSection_generated_h

#define TheBlindGame_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h_19_RPC_WRAPPERS
#define TheBlindGame_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define TheBlindGame_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h_19_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUMovieSceneAkAudioEventSection(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_UMovieSceneAkAudioEventSection(); \
	public: \
	DECLARE_CLASS(UMovieSceneAkAudioEventSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AkAudio"), AKAUDIO_API) \
	DECLARE_SERIALIZER(UMovieSceneAkAudioEventSection) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TheBlindGame_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h_19_INCLASS \
	private: \
	static void StaticRegisterNativesUMovieSceneAkAudioEventSection(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_UMovieSceneAkAudioEventSection(); \
	public: \
	DECLARE_CLASS(UMovieSceneAkAudioEventSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AkAudio"), AKAUDIO_API) \
	DECLARE_SERIALIZER(UMovieSceneAkAudioEventSection) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TheBlindGame_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AKAUDIO_API UMovieSceneAkAudioEventSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneAkAudioEventSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AKAUDIO_API, UMovieSceneAkAudioEventSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneAkAudioEventSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AKAUDIO_API UMovieSceneAkAudioEventSection(UMovieSceneAkAudioEventSection&&); \
	AKAUDIO_API UMovieSceneAkAudioEventSection(const UMovieSceneAkAudioEventSection&); \
public:


#define TheBlindGame_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AKAUDIO_API UMovieSceneAkAudioEventSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AKAUDIO_API UMovieSceneAkAudioEventSection(UMovieSceneAkAudioEventSection&&); \
	AKAUDIO_API UMovieSceneAkAudioEventSection(const UMovieSceneAkAudioEventSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AKAUDIO_API, UMovieSceneAkAudioEventSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneAkAudioEventSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneAkAudioEventSection)


#define TheBlindGame_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Event() { return STRUCT_OFFSET(UMovieSceneAkAudioEventSection, Event); } \
	FORCEINLINE static uint32 __PPO__EventName() { return STRUCT_OFFSET(UMovieSceneAkAudioEventSection, EventName); }


#define TheBlindGame_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h_16_PROLOG
#define TheBlindGame_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheBlindGame_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h_19_PRIVATE_PROPERTY_OFFSET \
	TheBlindGame_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h_19_RPC_WRAPPERS \
	TheBlindGame_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h_19_INCLASS \
	TheBlindGame_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheBlindGame_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheBlindGame_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h_19_PRIVATE_PROPERTY_OFFSET \
	TheBlindGame_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	TheBlindGame_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h_19_INCLASS_NO_PURE_DECLS \
	TheBlindGame_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheBlindGame_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS