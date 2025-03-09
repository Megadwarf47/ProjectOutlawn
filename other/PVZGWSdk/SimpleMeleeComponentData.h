///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/GameComponentData.h>

namespace fb {
	class SimpleMeleeCommonData;
}

namespace fb {
	class SimpleMeleeComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SimpleMeleeComponentData"); }
		virtual ~SimpleMeleeComponentData() override {}
		SimpleMeleeComponentData() {
			m_meleeRecoveryTime = 3.f;
			m_meleeCloseAttackDistance = 1.5f;
			m_meleeFarAttackDistance = 2.5f;
			m_allowForceVisbile = true;
		};

		CtrRef<SimpleMeleeCommonData> m_commonData; // 0x70 (112)
		float m_meleeRecoveryTime; // 0x78 (120)
		float m_meleeCloseAttackDistance; // 0x7C (124)
		float m_meleeFarAttackDistance; // 0x80 (128)
		bool m_allowForceVisbile; // 0x84 (132)
	}; // 0x90 (144)
}

