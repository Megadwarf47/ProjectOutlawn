///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTEvalFunc.h>
#include <fb/CharacterType.h>

namespace fb {
	class BT_IsTargetOfCharacterType : public BTEvalFunc {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BT_IsTargetOfCharacterType"); }
		virtual ~BT_IsTargetOfCharacterType() override {}
		BT_IsTargetOfCharacterType() {
			m_targetType = CharacterType::Character_Unknown;
		};

		CharacterType m_targetType; // 0x20 (32)
	}; // 0x28 (40)
}

