///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PropertyTrackBaseData.h>
#include <fb/RefArray.h>

namespace fb {
	class TransformLayerData;
}

namespace fb {
	class LayeredTransformTrackData : public PropertyTrackBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LayeredTransformTrackData"); }
		virtual ~LayeredTransformTrackData() override {}
		LayeredTransformTrackData() {
			m_timelineOriginPinId = 0;
		};

		RefArray<TransformLayerData> m_layerTracks; // 0x30 (48)
		s32 m_timelineOriginPinId; // 0x38 (56)
	}; // 0x40 (64)
}

