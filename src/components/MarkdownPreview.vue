<script setup lang="ts">
import { onMounted } from 'vue';
import 'md-editor-v3/lib/preview.css';
import { MdPreview } from 'md-editor-v3';
import { useMarkdownLoader } from '@/lib/loader';

const { text, loadMarkdown } = useMarkdownLoader('/test.md');
const id = 'preview-only';

onMounted(() => {
    loadMarkdown();
});
</script>

<template>
    <MdPreview :modelValue="text" :editorId="id" />
</template>