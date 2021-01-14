// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class AnimatedIconProperties
{
public:
    AnimatedIconProperties();

    void FallbackIconSource(winrt::IconSource const& value);
    winrt::IconSource FallbackIconSource();

    void Source(winrt::IRichAnimatedVisualSource const& value);
    winrt::IRichAnimatedVisualSource Source();

    static void SetState(winrt::DependencyObject const& target, winrt::hstring const& value);
    static winrt::hstring GetState(winrt::DependencyObject const& target);

    static winrt::DependencyProperty FallbackIconSourceProperty() { return s_FallbackIconSourceProperty; }
    static winrt::DependencyProperty SourceProperty() { return s_SourceProperty; }
    static winrt::DependencyProperty StateProperty() { return s_StateProperty; }

    static GlobalDependencyProperty s_FallbackIconSourceProperty;
    static GlobalDependencyProperty s_SourceProperty;
    static GlobalDependencyProperty s_StateProperty;

    static void EnsureProperties();
    static void ClearProperties();

    static void OnFallbackIconSourcePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnSourcePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);
};