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
	class BangerPhysicsComponentData : public GamePhysicsComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BangerPhysicsComponentData"); }
		virtual ~BangerPhysicsComponentData() override {}
		BangerPhysicsComponentData() {
		};

		Vec3 m_impulseInput; // 0x80 (128)
	}; // 0x90 (144)
}

