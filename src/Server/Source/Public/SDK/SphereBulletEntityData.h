///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BulletEntityData.h>
#include <fb/CtrRef.h>

namespace fb {
	class BuffData;
}

namespace fb {
	class SphereBulletEntityData : public BulletEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SphereBulletEntityData"); }
		virtual ~SphereBulletEntityData() override {}
		SphereBulletEntityData() {
			m_sphereBulletRadius = 0.1f;
			m_snapToGround = false;
			m_restrictDamagerBuffToPlayerDamage = true;
		};

		float m_sphereBulletRadius; // 0x180 (384)
		CtrRef<BuffData> m_buff; // 0x188 (392)
		CtrRef<BuffData> m_damagerBuff; // 0x190 (400)
		bool m_snapToGround; // 0x198 (408)
		bool m_restrictDamagerBuffToPlayerDamage; // 0x199 (409)
	}; // 0x1A0 (416)
}

