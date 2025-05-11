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
	class ObjectBlueprint;
}

namespace fb {
	class DestructionControllerComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DestructionControllerComponentData"); }
		virtual ~DestructionControllerComponentData() override {}
		DestructionControllerComponentData() {
		};

		RefArray<ObjectBlueprint> m_debrisClusters; // 0x70 (112)
	}; // 0x80 (128)
}

