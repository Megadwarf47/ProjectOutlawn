///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntRef.h>
#include <fb/GameComponentData.h>
#include <fb/Vec3.h>

namespace fb {
	class PhantomComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PhantomComponentData"); }
		virtual ~PhantomComponentData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		PhantomComponentData() {
			m_boxSize = Vec3(2.f, 2.f, 2.f);
		};

		Vec3 m_boxSize; // 0x70 (112)
		AntRef m_asyncQueryPointerAsset; // 0x80 (128)
		AntRef m_enableTrajectoryOverride; // 0x94 (148)
		AntRef m_trajectoryOverride; // 0xA8 (168)
	}; // 0xC0 (192)
}

