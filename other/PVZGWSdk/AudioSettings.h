///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class AudioSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AudioSettings"); }
		virtual ~AudioSettings() override {}
		AudioSettings() {
			m_dataManagerCacheSize = 15728640;
			m_dataManagerCacheRsxSize = 0;
			m_dataManagerMaxReadIssueCount = 1;
			m_dataManagerMaxReadActiveCount = 2;
			m_dataManagerMaxTrimSize = 0;
			m_audioCoreCpuLoadLimit = 70.f;
			m_audioCoreCpuLoadRecovery = 10.f;
			m_audioCoreThread = -1;
			m_audioCoreMixJobThreadCount = -1;
			m_audioCoreMaxMixJobThreadCount = 3;
			m_audioCoreMinProcStageVoicesToGoWide = 30;
			m_audioCoreMiniumMixAhead = 0.f;
			m_audioCoreTargetMixAhead = 0.f;
			m_audioCoreMaxChannelCount = 8;
			m_delayLineAllocSize = 1572864;
			m_reverbAllocSize = 0;
			m_maxAudibleSoundCount = 15;
			m_hdrSuspensionThreshold = 2.f;
			m_hdrZombieThreshold = 4.f;
			m_hdrEnableSuspensionThreshold = 3.f;
			m_soundSpeed = 331.5f;
			m_soundDopplerFactor = 0.5f;
			m_soundDopplerSmoothFactor = 0.8f;
			m_musicRequestBufferTime = 3.f;
			m_dacDelay = 0;
			m_dacAmplitude = 1.f;
			m_audioCoreMultipleMixJobsEnabled = true;
			m_audioCoreSystemJobsEnabled = false;
			m_audioCoreWatchDogThreadEnabled = false;
		};

		u32 m_dataManagerCacheSize; // 0x10 (16)
		u32 m_dataManagerCacheRsxSize; // 0x14 (20)
		u32 m_dataManagerMaxReadIssueCount; // 0x18 (24)
		u32 m_dataManagerMaxReadActiveCount; // 0x1C (28)
		u32 m_dataManagerMaxTrimSize; // 0x20 (32)
		float m_audioCoreCpuLoadLimit; // 0x24 (36)
		float m_audioCoreCpuLoadRecovery; // 0x28 (40)
		s32 m_audioCoreThread; // 0x2C (44)
		s32 m_audioCoreMixJobThreadCount; // 0x30 (48)
		s32 m_audioCoreMaxMixJobThreadCount; // 0x34 (52)
		s32 m_audioCoreMinProcStageVoicesToGoWide; // 0x38 (56)
		float m_audioCoreMiniumMixAhead; // 0x3C (60)
		float m_audioCoreTargetMixAhead; // 0x40 (64)
		u32 m_audioCoreMaxChannelCount; // 0x44 (68)
		u32 m_delayLineAllocSize; // 0x48 (72)
		u32 m_reverbAllocSize; // 0x4C (76)
		u32 m_maxAudibleSoundCount; // 0x50 (80)
		float m_hdrSuspensionThreshold; // 0x54 (84)
		float m_hdrZombieThreshold; // 0x58 (88)
		float m_hdrEnableSuspensionThreshold; // 0x5C (92)
		float m_soundSpeed; // 0x60 (96)
		float m_soundDopplerFactor; // 0x64 (100)
		float m_soundDopplerSmoothFactor; // 0x68 (104)
		float m_musicRequestBufferTime; // 0x6C (108)
		u32 m_dacDelay; // 0x70 (112)
		float m_dacAmplitude; // 0x74 (116)
		bool m_audioCoreMultipleMixJobsEnabled; // 0x78 (120)
		bool m_audioCoreSystemJobsEnabled; // 0x79 (121)
		bool m_audioCoreWatchDogThreadEnabled; // 0x7A (122)
	}; // 0x80 (128)
}

