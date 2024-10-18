<script setup lang="ts">
import Console from '@/components/Console.vue';
import CodeEditor from '@/components/CodeEditor.vue';
import MarkdownPreview from '@/components/MarkdownPreview.vue';
import { ResizablePanelGroup, ResizableHandle, ResizablePanel } from '@/components/ui/resizable';
</script>

<template>
    <ResizablePanelGroup id="main-group" direction="horizontal" class="h-screen w-full">
        <ResizablePanel id="panel-markdown" :default-size="25" class="h-full rounded-2xl border m-2">
            <MarkdownPreview />
        </ResizablePanel>
        <ResizableHandle id="handle-1" />
        <ResizablePanel id="panel-code" :default-size="50" class="h-screen rounded-2xl border mt-2">
            <CodeEditor />
        </ResizablePanel>
        <ResizableHandle id="handle-2" />
        <ResizablePanel id="panel-console" :default-size="25" class="h-full rounded-2xl border m-2">
            <Console />
        </ResizablePanel>
    </ResizablePanelGroup>
</template>