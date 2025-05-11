///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/TransformLayerData.h>

namespace fb {
	class FloatTrackData;
}

namespace fb {
	class KeyedTransformLayerData : public TransformLayerData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("KeyedTransformLayerData"); }
		virtual ~KeyedTransformLayerData() override {}
		KeyedTransformLayerData() {

			m_blendtype = LayeredTransform_BlendType::LayeredTransform_BlendType_WorldOverride;
		};

		CtrRef<FloatTrackData> m_translationX; // 0x38 (56)
		CtrRef<FloatTrackData> m_translationY; // 0x40 (64)
		CtrRef<FloatTrackData> m_translationZ; // 0x48 (72)
		CtrRef<FloatTrackData> m_rotationX; // 0x50 (80)
		CtrRef<FloatTrackData> m_rotationY; // 0x58 (88)
		CtrRef<FloatTrackData> m_rotationZ; // 0x60 (96)
	}; // 0x68 (104)
}

