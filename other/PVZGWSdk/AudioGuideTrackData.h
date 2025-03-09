///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/GuideTrackData.h>
#include <fb/RefArray.h>
#include <fb/String.h>

namespace fb {
	class AudioGuideKeyframe;
	class SoundAsset;
}

namespace fb {
	class AudioGuideTrackData : public GuideTrackData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AudioGuideTrackData"); }
		virtual ~AudioGuideTrackData() override {}
		AudioGuideTrackData() {

			m_guideTrackPriority = 1;
		};

		CtrRef<SoundAsset> m_sound; // 0x30 (48)
		String m_soundPositionName; // 0x38 (56)
		RefArray<AudioGuideKeyframe> m_keyframes; // 0x40 (64)
	}; // 0x48 (72)
}

