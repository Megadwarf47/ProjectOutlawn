///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/DynamicDataContainer.h>
#include <fb/DynamicEvent.h>
#include <fb/DynamicLink.h>

namespace fb {
	class InterfaceDescriptorData : public DynamicDataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("InterfaceDescriptorData"); }
		virtual ~InterfaceDescriptorData() override {}
		InterfaceDescriptorData() {
		};

		Array<DynamicEvent> m_inputEvents; // 0x18 (24)
		Array<DynamicEvent> m_outputEvents; // 0x20 (32)
		Array<DynamicLink> m_inputLinks; // 0x28 (40)
		Array<DynamicLink> m_outputLinks; // 0x30 (48)
	}; // 0x38 (56)
}

