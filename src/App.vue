<script setup lang="ts">
import CodeEditor from '@/components/CodeEditor.vue';
import DiffEditor from '@/components/DiffEditor.vue';
import MarkdownPreview from '@/components/MarkdownPreview.vue';
</script>

<template>
    <div class="h-screen w-full flex flex-row">
        <div class="h-full w-1/3 border">
            <MarkdownPreview />
        </div>
        <div class="h-full w-2/3">
            <!-- <CodeEditor /> -->
            <DiffEditor />
        </div>
    </div>
</template>