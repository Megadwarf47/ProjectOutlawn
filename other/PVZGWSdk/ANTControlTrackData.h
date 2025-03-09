///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/LinearTransform.h>
#include <fb/LinkTrackData.h>
#include <fb/RefArray.h>

namespace fb {
	class ANTLayerData;
}

namespace fb {
	class ANTControlTrackData : public LinkTrackData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ANTControlTrackData"); }
		virtual ~ANTControlTrackData() override {}
		ANTControlTrackData() {
			m_hideWhenNoClip = false;
			m_disableInterpolationBetweenClips = false;
		};

		RefArray<ANTLayerData> m_layerTracks; // 0x30 (48)
		Array<s32> m_skipToEndBones; // 0x38 (56)
		Array<LinearTransform> m_skipToEndTransforms; // 0x40 (64)
		bool m_hideWhenNoClip; // 0x48 (72)
		bool m_disableInterpolationBetweenClips; // 0x49 (73)
	}; // 0x50 (80)
}

