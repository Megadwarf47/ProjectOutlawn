///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/TransformLayerData.h>

namespace fb {
	class ANTTrajectoryTransformLayerData : public TransformLayerData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ANTTrajectoryTransformLayerData"); }
		virtual ~ANTTrajectoryTransformLayerData() override {}
		ANTTrajectoryTransformLayerData() {
			m_blendtype = LayeredTransform_BlendType::LayeredTransform_BlendType_LocalAdditive;
		};

	}; // 0x38 (56)
}

