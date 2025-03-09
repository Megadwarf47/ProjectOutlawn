///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>

namespace fb {
	class DestructionCommandEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DestructionCommandEntityData"); }
		virtual ~DestructionCommandEntityData() override {}
		DestructionCommandEntityData() {
			m_instanceCountDestroyedPerFrame = 10;
			m_instanceCountDestroyedPerType = 0;
		};

		u32 m_instanceCountDestroyedPerFrame; // 0x18 (24)
		u32 m_instanceCountDestroyedPerType; // 0x1C (28)
	}; // 0x20 (32)
}

