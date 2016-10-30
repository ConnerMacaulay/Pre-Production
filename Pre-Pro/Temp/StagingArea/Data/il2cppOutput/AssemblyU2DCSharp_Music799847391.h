#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Music
struct Music_t799847391;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Music
struct  Music_t799847391  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Music::musicPlaying
	bool ___musicPlaying_3;
	// UnityEngine.AudioSource Music::mainMusic
	AudioSource_t1135106623 * ___mainMusic_4;
	// UnityEngine.AudioClip Music::musicTracks
	AudioClip_t1932558630 * ___musicTracks_5;

public:
	inline static int32_t get_offset_of_musicPlaying_3() { return static_cast<int32_t>(offsetof(Music_t799847391, ___musicPlaying_3)); }
	inline bool get_musicPlaying_3() const { return ___musicPlaying_3; }
	inline bool* get_address_of_musicPlaying_3() { return &___musicPlaying_3; }
	inline void set_musicPlaying_3(bool value)
	{
		___musicPlaying_3 = value;
	}

	inline static int32_t get_offset_of_mainMusic_4() { return static_cast<int32_t>(offsetof(Music_t799847391, ___mainMusic_4)); }
	inline AudioSource_t1135106623 * get_mainMusic_4() const { return ___mainMusic_4; }
	inline AudioSource_t1135106623 ** get_address_of_mainMusic_4() { return &___mainMusic_4; }
	inline void set_mainMusic_4(AudioSource_t1135106623 * value)
	{
		___mainMusic_4 = value;
		Il2CppCodeGenWriteBarrier(&___mainMusic_4, value);
	}

	inline static int32_t get_offset_of_musicTracks_5() { return static_cast<int32_t>(offsetof(Music_t799847391, ___musicTracks_5)); }
	inline AudioClip_t1932558630 * get_musicTracks_5() const { return ___musicTracks_5; }
	inline AudioClip_t1932558630 ** get_address_of_musicTracks_5() { return &___musicTracks_5; }
	inline void set_musicTracks_5(AudioClip_t1932558630 * value)
	{
		___musicTracks_5 = value;
		Il2CppCodeGenWriteBarrier(&___musicTracks_5, value);
	}
};

struct Music_t799847391_StaticFields
{
public:
	// Music Music::musicInstance
	Music_t799847391 * ___musicInstance_2;

public:
	inline static int32_t get_offset_of_musicInstance_2() { return static_cast<int32_t>(offsetof(Music_t799847391_StaticFields, ___musicInstance_2)); }
	inline Music_t799847391 * get_musicInstance_2() const { return ___musicInstance_2; }
	inline Music_t799847391 ** get_address_of_musicInstance_2() { return &___musicInstance_2; }
	inline void set_musicInstance_2(Music_t799847391 * value)
	{
		___musicInstance_2 = value;
		Il2CppCodeGenWriteBarrier(&___musicInstance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
