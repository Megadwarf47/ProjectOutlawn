///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ANTLayerBlendType.h>
#include <fb/TimelineTrackData.h>

namespace fb {
	class ANTLayerData : public TimelineTrackData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ANTLayerData"); }
		virtual ~ANTLayerData() override {}
		ANTLayerData() {
			m_blendType = ANTLayerBlendType::ANTLayerBlendType_OverrideBlend;
		};

		ANTLayerBlendType m_blendType; // 0x28 (40)
	}; // 0x30 (48)
}

