package effects;

import static effects.BufferSamples.SAMPLE_SIZE;

public class Delay extends Effect {
    private static final double RATIO_DRY_TO_WET = 0.35;
    public static final int DEFAULT_SIZE_BUFFER = 8;
    public BufferSamples BufferSamples;

    public Delay() {
        super();
        this.BufferSamples = new BufferSamples(DEFAULT_SIZE_BUFFER);
    }

    public void setInputSampleStream(short[] inputAudioStream) {
        this.inputAudioStream = inputAudioStream;
    }
    @Override
    public synchronized short[] createEffect() {
        int indexCurrentSampleDelay = this.BufferSamples.getIndexCurrentElement();
        for (int j = 0; j < SAMPLE_SIZE; j++) {
            this.inputAudioStream[j] = (short) (RATIO_DRY_TO_WET * (this.inputAudioStream[j])
                    + ((1 - RATIO_DRY_TO_WET) * this.BufferSamples.getAmplitudeSampleDelay(indexCurrentSampleDelay, j)));
        }
        this.BufferSamples.add(this.inputAudioStream);
        return this.inputAudioStream;
    }
}

