///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/TransformLayerData.h>

namespace fb {
	class CameraAttachTransformLayerData : public TransformLayerData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CameraAttachTransformLayerData"); }
		virtual ~CameraAttachTransformLayerData() override {}
		CameraAttachTransformLayerData() {
			m_blendtype = LayeredTransform_BlendType::LayeredTransform_BlendType_WorldOverride;
		};

	}; // 0x38 (56)
}

