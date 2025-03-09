///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/DefaultBuffStateModifierData.h>
#include <fb/GameComponentData.h>
#include <fb/RefArray.h>

namespace fb {
	class BuffData;
}

namespace fb {
	class BuffComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BuffComponentData"); }
		virtual ~BuffComponentData() override {}
		BuffComponentData() {
		};

		RefArray<BuffData> m_buffs; // 0x70 (112)
		Array<DefaultBuffStateModifierData> m_buffStateModifiers; // 0x78 (120)
	}; // 0x80 (128)
}

