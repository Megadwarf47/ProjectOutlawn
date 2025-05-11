///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/LocalServerBackendData.h>

namespace fb {
	class PlaygroundServerBackendData : public LocalServerBackendData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PlaygroundServerBackendData"); }
		virtual ~PlaygroundServerBackendData() override {}
		PlaygroundServerBackendData() {
		};

	}; // 0x18 (24)
}

