///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>
#include <fb/RefArray.h>

namespace fb {
	class GameObjectData;
}

namespace fb {
	class DestructionPartComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DestructionPartComponentData"); }
		virtual ~DestructionPartComponentData() override {}
		DestructionPartComponentData() {
			m_partIndex = 0;
			m_fixed = false;
			m_fragile = false;
		};

		RefArray<GameObjectData> m_objects; // 0x70 (112)
		u32 m_partIndex; // 0x78 (120)
		bool m_fixed; // 0x7C (124)
		bool m_fragile; // 0x7D (125)
	}; // 0x80 (128)
}

