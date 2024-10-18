<script setup lang="ts">
import Console from '@/components/Console.vue';
import CodeEditor from '@/components/CodeEditor.vue';
import MarkdownPreview from '@/components/MarkdownPreview.vue';
import { ResizablePanelGroup, ResizableHandle, ResizablePanel } from '@/components/ui/resizable';
</script>

<template>
    <ResizablePanelGroup id="main-group" direction="horizontal" class="h-screen w-full">
        <ResizablePanel id="panel-markdown" :default-size="25" class="h-screen">
            <MarkdownPreview />
        </ResizablePanel>
        <ResizableHandle id="handle-1" with-handle />
        <ResizablePanel id="panel-code" :default-size="50" class="h-screen">
            <CodeEditor />
        </ResizablePanel>
        <ResizableHandle id="handle-2" with-handle />
        <ResizablePanel id="panel-console" :default-size="25" class="h-screen">
            <Console />
        </ResizablePanel>
    </ResizablePanelGroup>
</template>