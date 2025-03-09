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
	class MeshLodGroup;
}

namespace fb {
	class CharacterCustomizationComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CharacterCustomizationComponentData"); }
		virtual ~CharacterCustomizationComponentData() override {}
		CharacterCustomizationComponentData() {
		};

		CtrRef<MeshLodGroup> m_sharedLodGroup; // 0x70 (112)
	}; // 0x80 (128)
}

