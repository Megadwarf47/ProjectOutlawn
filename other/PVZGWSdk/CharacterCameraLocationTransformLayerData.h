///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/TransformLayerData.h>

namespace fb {
	class CharacterCameraLocationTransformLayerData : public TransformLayerData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CharacterCameraLocationTransformLayerData"); }
		virtual ~CharacterCameraLocationTransformLayerData() override {}
		CharacterCameraLocationTransformLayerData() {
			m_returnPlayerPosition = false;

			m_blendtype = LayeredTransform_BlendType::LayeredTransform_BlendType_WorldOverride;
		};

		bool m_returnPlayerPosition; // 0x38 (56)
	}; // 0x40 (64)
}

