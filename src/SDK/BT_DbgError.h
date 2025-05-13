///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTTaskFunc.h>
#include <fb/EDebug.h>
#include <fb/String.h>

namespace fb {
	class BT_DbgError : public BTTaskFunc {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BT_DbgError"); }
		virtual ~BT_DbgError() override {}
		BT_DbgError() {
			m_debugMode = EDebug::EDebug_Info;
		};

		EDebug m_debugMode; // 0x18 (24)
		String m_debugMessage; // 0x20 (32)
	}; // 0x28 (40)
}

