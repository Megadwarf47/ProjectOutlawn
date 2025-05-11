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
	class OrbitalCamLayerData : public TransformLayerData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("OrbitalCamLayerData"); }
		virtual ~OrbitalCamLayerData() override {}
		OrbitalCamLayerData() {

			m_blendtype = LayeredTransform_BlendType::LayeredTransform_BlendType_WorldOverride;
		};

		CtrRef<FloatTrackData> m_distanceFromPivot; // 0x38 (56)
		CtrRef<FloatTrackData> m_rotationY; // 0x40 (64)
		CtrRef<FloatTrackData> m_positionY; // 0x48 (72)
	}; // 0x50 (80)
}

