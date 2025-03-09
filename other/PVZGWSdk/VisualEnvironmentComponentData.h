///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/GameComponentData.h>

namespace fb {
	class VisualEnvironmentComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VisualEnvironmentComponentData"); }
		virtual ~VisualEnvironmentComponentData() override {}
		VisualEnvironmentComponentData() {
		};

		Array<String> m_propertyOverrides; // 0x70 (112)
		Array<u32> m_propertyOverrideMasks; // 0x78 (120)
	}; // 0x80 (128)
}

