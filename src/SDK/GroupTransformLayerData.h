///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/RefArray.h>
#include <fb/TransformLayerData.h>

namespace fb {
	class TransformLayerData;
}

namespace fb {
	class GroupTransformLayerData : public TransformLayerData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GroupTransformLayerData"); }
		virtual ~GroupTransformLayerData() override {}
		GroupTransformLayerData() {

			m_blendtype = LayeredTransform_BlendType::LayeredTransform_BlendType_WorldOverride;
		};

		RefArray<TransformLayerData> m_children; // 0x38 (56)
	}; // 0x40 (64)
}

