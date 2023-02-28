/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class JUCE_sandboxAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    JUCE_sandboxAudioProcessorEditor (JUCE_sandboxAudioProcessor&);
    ~JUCE_sandboxAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    JUCE_sandboxAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (JUCE_sandboxAudioProcessorEditor)
};
