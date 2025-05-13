///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>
#include <fb/String.h>

namespace fb {
	class ModsExternalActivatorComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ModsExternalActivatorComponentData"); }
		virtual ~ModsExternalActivatorComponentData() override {}
		ModsExternalActivatorComponentData() {
			m_allowMultiTrigger = true;
		};

		String m_externalActivateName; // 0x70 (112)
		bool m_allowMultiTrigger; // 0x78 (120)
	}; // 0x80 (128)
}

