///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GroundAttachMethod.h>
#include <fb/TransformLayerData.h>

namespace fb {
	class GroundAttachTransformLayerData : public TransformLayerData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GroundAttachTransformLayerData"); }
		virtual ~GroundAttachTransformLayerData() override {}
		GroundAttachTransformLayerData() {
			m_attachMethod = GroundAttachMethod::GroundAttachMethod_AsyncRaycast;
			m_raycastStartHeight = 1.f;
			m_raycastEndHeight = -1.f;
			m_allowAboveGround = false;
		};

		GroundAttachMethod m_attachMethod; // 0x38 (56)
		float m_raycastStartHeight; // 0x3C (60)
		float m_raycastEndHeight; // 0x40 (64)
		bool m_allowAboveGround; // 0x44 (68)
	}; // 0x48 (72)
}

