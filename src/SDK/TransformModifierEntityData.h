///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/LinearTransform.h>
#include <fb/ModifierAxis.h>
#include <fb/Realm.h>

namespace fb {
	class TransformModifierEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TransformModifierEntityData"); }
		virtual ~TransformModifierEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		TransformModifierEntityData() {
			m_realm = Realm::Realm_Client;
			m_left = ModifierAxis::maLeft;
			m_up = ModifierAxis::maUp;
			m_forward = ModifierAxis::maForward;
			m_invertFullTransform = false;
			m_invertLeft = false;
			m_invertUp = false;
			m_invertForward = false;
			m_invertTranslation = false;
		};

		Realm m_realm; // 0x18 (24)
		LinearTransform m_in; // 0x20 (32)
		ModifierAxis m_left; // 0x60 (96)
		ModifierAxis m_up; // 0x64 (100)
		ModifierAxis m_forward; // 0x68 (104)
		bool m_invertFullTransform; // 0x6C (108)
		bool m_invertLeft; // 0x6D (109)
		bool m_invertUp; // 0x6E (110)
		bool m_invertForward; // 0x6F (111)
		bool m_invertTranslation; // 0x70 (112)
	}; // 0x80 (128)
}

