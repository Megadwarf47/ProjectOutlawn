///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/InterruptFlow.h>

namespace fb {
	class UIInterruptFlow : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIInterruptFlow"); }
		virtual ~UIInterruptFlow() override {}
		UIInterruptFlow() {
		};

		Array<InterruptFlow> m_interruptFlow; // 0x18 (24)
	}; // 0x20 (32)
}

