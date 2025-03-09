///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/LinearTransform.h>
#include <fb/String.h>
#include <fb/TransformLayerData.h>

namespace fb {
	class GameObjectData;
}

namespace fb {
	class AttachTransformLayerData : public TransformLayerData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AttachTransformLayerData"); }
		virtual ~AttachTransformLayerData() override {}
		AttachTransformLayerData() {

			m_blendtype = LayeredTransform_BlendType::LayeredTransform_BlendType_WorldOverride;
		};

		CtrRef<GameObjectData> m_attachEntity; // 0x38 (56)
		LinearTransform m_attachOffset; // 0x40 (64)
		String m_childBoneName; // 0x80 (128)
		String m_parentBoneName; // 0x88 (136)
	}; // 0x90 (144)
}

