///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ServerBackendData.h>

namespace fb {
	class LanServerBackendData : public ServerBackendData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LanServerBackendData"); }
		virtual ~LanServerBackendData() override {}
		LanServerBackendData() {
		};

	}; // 0x18 (24)
}

