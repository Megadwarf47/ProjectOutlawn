///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/OutputNodeData.h>

namespace fb {
	class DirectOutputNodeData : public OutputNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DirectOutputNodeData"); }
		virtual ~DirectOutputNodeData() override {}
		DirectOutputNodeData() {
		};

	}; // 0x80 (128)
}

