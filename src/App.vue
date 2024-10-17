<script setup lang="ts">
import Console from '@/components/Console.vue';
import CodeEditor from '@/components/CodeEditor.vue';
import DiffEditor from '@/components/DiffEditor.vue';
import MarkdownPreview from '@/components/MarkdownPreview.vue';
</script>

<template>
    <div class="h-screen w-full flex flex-row">
        <div class="h-full w-1/4 border-r">
            <MarkdownPreview />
        </div>
        <div class="h-full w-2/4">
            <CodeEditor />
        </div>
        <!-- <div class="h-full w-2/4">
            <DiffEditor />
        </div> -->
        <div class="h-full w-1/4">
            <Console />
        </div>
    </div>
</template>