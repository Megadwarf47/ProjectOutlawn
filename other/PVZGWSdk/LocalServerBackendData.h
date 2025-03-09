///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ServerBackendData.h>

namespace fb {
	class LocalServerBackendData : public ServerBackendData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LocalServerBackendData"); }
		virtual ~LocalServerBackendData() override {}
		LocalServerBackendData() {
		};

	}; // 0x18 (24)
}

