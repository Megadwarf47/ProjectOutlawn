///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GamePhysicsComponentData.h>
#include <fb/Vec3.h>

namespace fb {
	class DynamicModelPhysicsComponentData : public GamePhysicsComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DynamicModelPhysicsComponentData"); }
		virtual ~DynamicModelPhysicsComponentData() override {}
		DynamicModelPhysicsComponentData() {
		};

		Vec3 m_impulseInput; // 0x80 (128)
	}; // 0x90 (144)
}

