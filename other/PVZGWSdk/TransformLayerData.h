///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/LayeredTransform_BlendType.h>
#include <fb/TimelineTrackData.h>

namespace fb {
	class FloatTrackData;
}

namespace fb {
	class TransformLayerData : public TimelineTrackData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TransformLayerData"); }
		virtual ~TransformLayerData() override {}
		TransformLayerData() {
			m_blendtype = LayeredTransform_BlendType::LayeredTransform_BlendType_Special;
		};

		CtrRef<FloatTrackData> m_weight; // 0x28 (40)
		LayeredTransform_BlendType m_blendtype; // 0x30 (48)
	}; // 0x38 (56)
}

