///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/String.h>

namespace fb {
	class ObjectBlueprint;
}

namespace fb {
	class TextUnlockPartData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TextUnlockPartData"); }
		virtual ~TextUnlockPartData() override {}
		TextUnlockPartData() {
		};

		String m_shaderNodeName; // 0x10 (16)
		CtrRef<ObjectBlueprint> m_meshBlueprint; // 0x18 (24)
	}; // 0x20 (32)
}

