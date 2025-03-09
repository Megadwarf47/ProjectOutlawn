///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/VoiceOverValueConnection.h>

namespace fb {
	class VoiceOverLabelSource : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverLabelSource"); }
		virtual ~VoiceOverLabelSource() override {}
		VoiceOverLabelSource() {
		};

		VoiceOverValueConnection m_source; // 0x10 (16)
	}; // 0x20 (32)
}

