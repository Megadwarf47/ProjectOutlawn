///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>

namespace fb {
	class ClothInteractionComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ClothInteractionComponentData"); }
		virtual ~ClothInteractionComponentData() override {}
		ClothInteractionComponentData() {
			m_clothCollision = true;
		};

		bool m_clothCollision; // 0x70 (112)
	}; // 0x80 (128)
}

