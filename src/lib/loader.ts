import { ref } from "vue";

export function useFileLoader(filePath: string) {
    const content = ref('');

    const loadFile = async () => {
        try{
            const response = await fetch(filePath);
            if (!response.ok) {
                throw new Error('Network response was not ok');
            }
            content.value = await response.text();
        }catch(error){
            console.error('Error loading file:', error);
        }
    };

    return { content, loadFile };
}