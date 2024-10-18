<script setup lang="ts">
import { onMounted } from 'vue';
import 'md-editor-v3/lib/preview.css';
import { MdPreview } from 'md-editor-v3';
import { useFileLoader } from '@/lib/loader';

const id = 'preview-only';
const { content, loadFile } = useFileLoader('/test.md');

onMounted(() => {
    loadFile();
});
</script>

<template>
    <MdPreview :modelValue="content" :editorId="id" />
</template>