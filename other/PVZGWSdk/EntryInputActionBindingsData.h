///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/DataContainer.h>
#include <fb/EntryInputActionBinding.h>

namespace fb {
	class EntryInputActionBindingsData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EntryInputActionBindingsData"); }
		virtual ~EntryInputActionBindingsData() override {}
		EntryInputActionBindingsData() {
		};

		Array<EntryInputActionBinding> m_bindings; // 0x10 (16)
	}; // 0x18 (24)
}

