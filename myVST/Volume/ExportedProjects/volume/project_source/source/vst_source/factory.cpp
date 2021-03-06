//-----------------------------------------------------------------------------
// Project     : VST SDK
// Version     : 3.6.0
//
// Category    : Examples
// Filename    : public.sdk/samples/vst/note_expression_synth/source/factory.cpp
// Created by  : Steinberg, 02/2010
// Description :
//
//-----------------------------------------------------------------------------
// LICENSE
// (c) 2013, Steinberg Media Technologies GmbH, All Rights Reserved
//-----------------------------------------------------------------------------
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
//
//   * Redistributions of source code must retain the above copyright notice,
//     this list of conditions and the following disclaimer.
//   * Redistributions in binary form must reproduce the above copyright notice,
//     this list of conditions and the following disclaimer in the documentation
//     and/or other materials provided with the distribution.
//   * Neither the name of the Steinberg Media Technologies nor the names of its
//     contributors may be used to endorse or promote products derived from this
//     software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
// ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
// WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
// INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
// BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
// LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
// OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
// OF THE POSSIBILITY OF SUCH DAMAGE.
//-----------------------------------------------------------------------------
#include "public.sdk/source/main/pluginfactoryvst3.h"
#include "VSTProcessor.h"
#include "version.h"	// for versioning

#define stringPluginName "Volume"

BEGIN_FACTORY_DEF ("RackAFX User",
				   "",
				   "")

	DEF_CLASS2 (INLINE_UID_FROM_FUID(Steinberg::Vst::Sock2VST3::Processor::cid),
				PClassInfo::kManyInstances,					// cardinality
				kVstAudioEffectClass,						// the component category
				stringPluginName,							// RAFX Plug-in name
				0,											// single component effects can not be destributed so this is zero
				Vst::PlugType::kFx,			// Subcategory for this Plug-in
				FULL_VERSION_STR,							// Plug-in version
				kVstVersionString,							// the VST 3 SDK version
				Steinberg::Vst::Sock2VST3::Processor::createInstance)// function pointer called when this component should be instanciated
END_FACTORY

// --- see VST3 docs; you can do some early or late init/deinit stuff here if you want
//     but be careful!
bool InitModule(){
	return true;
}
bool DeinitModule(){
	return true;
}




