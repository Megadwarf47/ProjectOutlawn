///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DamageType.h>
#include <fb/GameComponentData.h>
#include <fb/MaterialDecl.h>
#include <fb/MirrorDamageTrapezoid.h>

namespace fb {
	class BuffData;
}

namespace fb {
	class TrapezoidDamageComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TrapezoidDamageComponentData"); }
		virtual ~TrapezoidDamageComponentData() override {}
		TrapezoidDamageComponentData() {
			m_damageType = DamageType::DamageType_Normal;
			m_groupDamage = false;
		};

		MirrorDamageTrapezoid m_damageTrapezoid; // 0x70 (112)
		DamageType m_damageType; // 0x90 (144)
		MaterialDecl m_materialPair; // 0x94 (148)
		CtrRef<BuffData> m_buff; // 0x98 (152)
		bool m_groupDamage; // 0xA0 (160)
	}; // 0xB0 (176)
}

